//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WebViewSanboxUtility : NSObject
{
}

+ (id)replaceFirstPlaceHolder:(id)arg1 value:(id)arg2 FromString:(id)arg3;
+ (id)newUrlStringFrom:(id)arg1 replaceHost:(id)arg2;
+ (id)dictFragmentForURL:(id)arg1;
+ (id)dictQueryForURL:(id)arg1;
+ (id)sha1:(id)arg1;
+ (id)sucureRamdomHexStringInBytesLength:(unsigned int)arg1;
+ (id)hexadecimalStringFromData:(id)arg1;
+ (id)randomSanboxId;
+ (id)convertWebComptPb2WebComptInfo:(id)arg1;

@end

