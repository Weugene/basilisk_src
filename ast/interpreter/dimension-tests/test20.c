/**
# Tests default field dimensions */

int main()
{
  init_grid (1);
  { interpreter_verbosity (2);
    scalar s[];
    vector u[];
    tensor t[];
    reset ({u, s, t}, 0.);
    foreach() {
      dimensional (s[] == L0);
      foreach_dimension() {
	dimensional (u.x[] == L0);
	dimensional (t.x.x[] == L0);
	dimensional (t.x.y[] == L0);
      }
    }
  }
}
