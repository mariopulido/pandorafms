/* Pandora agent service for Win32.
   
   Copyright (C) 2006 Artica ST.
   Written by Esteban Sanchez.
  
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.
  
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
  
   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation,
   Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

#ifndef	__PANDORA_WINDOWS_SERVICE_H__
#define	__PANDORA_WINDOWS_SERVICE_CLIENT_H__

#include <list>
#include "windows_service.h"
#include "tinyxml/tinyxml.h"
#include "pandora_agent_conf.h"
#include "modules/pandora_module_list.h"

using namespace std;

class Pandora_Windows_Service : public Windows_Service {
private:
        //SSH::Babel_Ssh_Client *ssh_client;
        Pandora_Agent_Conf  *conf;
        Pandora_Module_List *modules;
        long                 execution_number;
        
        void addXMLHeader (TiXmlElement *root);
        public:
        void pandora_run  ();
        void pandora_init ();
public:
        Pandora_Windows_Service  (const char * svc_name,
                                  const char * svc_display_name,
                                  const char * svc_description);
        ~Pandora_Windows_Service ();
};

#endif
