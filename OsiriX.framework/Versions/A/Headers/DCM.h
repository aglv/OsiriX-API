/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - LGPL
  
  See https://www.osirix-viewer.com/copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
=========================================================================*/


#import "DCMValueRepresentation.h"
#import "DCMAttributeTag.h"
#import "DCMAttribute.h"
#import "DCMSequenceAttribute.h"
#import "DCMDataContainer.h"
#import "DCMObject.h"
#import "DCMTransferSyntax.h"
#import "DCMTagDictionary.h"
#import "DCMTagForNameDictionary.h"
#import "DCMCharacterSet.h"
#import "DCMPixelDataAttribute.h"
#import "DCMCalendarDate.h"
#import "DCMLimitedObject.h"
#import "DCMNetServiceDelegate.h"
#import "DCMEncapsulatedPDF.h"

#define DCMDEBUG 0
#define DCMFramework_compile YES

#import <Accelerate/Accelerate.h>

typedef enum DCM_CompressionQuality_ {DCMLosslessQuality = 0, DCMHighQuality, DCMMediumQuality, DCMLowQuality} DCM_CompressionQuality;


@protocol MoveStatusProtocol
	- (void)setStatus:(unsigned short)moveStatus  numberSent:(int)numberSent numberError:(int)numberErrors;
@end


