/*
 *
 *  Copyright (C) 1998-2005, OFFIS
 *
 *  This software and supporting documentation were developed by
 *
 *    Kuratorium OFFIS e.V.
 *    Healthcare Information and Communication Systems
 *    Escherweg 2
 *    D-26121 Oldenburg, Germany
 *
 *  THIS SOFTWARE IS MADE AVAILABLE,  AS IS,  AND OFFIS MAKES NO  WARRANTY
 *  REGARDING  THE  SOFTWARE,  ITS  PERFORMANCE,  ITS  MERCHANTABILITY  OR
 *  FITNESS FOR ANY PARTICULAR USE, FREEDOM FROM ANY COMPUTER DISEASES  OR
 *  ITS CONFORMITY TO ANY SPECIFICATION. THE ENTIRE RISK AS TO QUALITY AND
 *  PERFORMANCE OF THE SOFTWARE IS WITH THE USER.
 *
 *  Module: dcmsign
 *
 *  Author: Norbert Loxen, Marco Eichelberg
 *
 *  Purpose:
 *    classes: SiCreatorProfile
 *
 *  Last Update:      $Author: lpysher $
 *  Update Date:      $Date: 2006/03/01 20:16:07 $
 *  CVS/RCS Revision: $Revision: 1.1 $
 *  Status:           $State: Exp $
 *
 *  CVS/RCS Log at end of file
 *
 */

#ifndef SICREAPR_H
#define SICREAPR_H

#include "../config/osconfig.h"
#include "sibrsapr.h"   /* for SiBaseRSAProfile */

#ifdef WITH_OPENSSL

/** Creator RSA Digital Signature Profile
 */
class SiCreatorProfile: public SiBaseRSAProfile
{ 
public:

  /// default constructor
  SiCreatorProfile() { }

  /// destructor
  virtual ~SiCreatorProfile() { }
  
  /** checks whether an attribute with the given tag is required to be signed
   *  for the current security profile.
   *  @param key tag key to be checked
   *  @return true if required, false otherwise.
   */
  virtual OFBool attributeRequired(const DcmTagKey& key) const;

};

#endif
#endif

/*
 *  $Log: sicreapr.h,v $
 *  Revision 1.1  2006/03/01 20:16:07  lpysher
 *  Added dcmtkt ocvs not in xcode  and fixed bug with multiple monitors
 *
 *  Revision 1.5  2005/12/08 16:04:35  meichel
 *  Changed include path schema for all DCMTK header files
 *
 *  Revision 1.4  2003/06/04 14:21:03  meichel
 *  Simplified include structure to avoid preprocessor limitation
 *    (max 32 #if levels) on MSVC5 with STL.
 *
 *  Revision 1.3  2001/11/16 15:50:50  meichel
 *  Adapted digital signature code to final text of supplement 41.
 *
 *  Revision 1.2  2001/06/01 15:50:48  meichel
 *  Updated copyright header
 *
 *  Revision 1.1  2000/11/07 16:48:54  meichel
 *  Initial release of dcmsign module for DICOM Digital Signatures
 *
 *
 */
