#include <iostream>

using namespace std;

void under(int x) {
	for (int i = 0; i < x; ++i) {
		cout << "____";
	}
}

void foo(int n, int x) {
	if (0 == n) {
		under(x);
		cout << "\"����Լ��� ������?\"" << '\n';
		under(x);
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		under(x);
		cout << "��� �亯�Ͽ���.\n";

		return;
	}

	under(x);
	cout << R"("����Լ��� ������?")" << '\n';
	under(x);
	cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << '\n';
	under(x);
	cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
	under(x);
	cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";

	foo(n - 1, x + 1);

	under(x);
	cout << "��� �亯�Ͽ���.\n";
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	foo(n, 0);

	return 0;
}