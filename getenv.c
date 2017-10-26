int main (int argc, char *argv[]) {
   if (argc < 3)
      printf ("Usage : %s <variable environnement> <executable>\n", argv[0]);
   else
      printf ("%s is located at %p\n", argv[1], getenv(argv[1]) + (strlen(argv[0]) - strlen(argv[2]))*2);
   return 0;
}
