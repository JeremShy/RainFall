class N {
	void *vtable;
	char annotation[0x64];
	int nb;

	N operator+(N const& lhs, N const& rhs) {
		return (lhs.nb + rhs.nb);
	}

	N operator-(N const& lhs, N const& rhs) {
		return (lhs.nb - rhs.nb);
	}


	N(int nb) {
		this.nb = nb;
	}

	void setAnnotation(char *str) {
		memcpy(annotation, str, strlen(str));
	}
}

int main(int ac, char **av) {
	if (ac <= 1) {
		_exit(1);
	}

	N *n1 = new N(5); // 0x0804A008
	N *n2 = new N(6); // 0x0804A078

	n1.setAnnotation(av[1]);
	n2 + n1;
	return (0);
}
