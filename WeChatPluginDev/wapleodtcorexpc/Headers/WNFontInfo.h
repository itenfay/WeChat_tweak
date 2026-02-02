//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WNFontInfo : NSObject
{
    NSString *_displayName;
    NSString *_familyName;
    NSString *_fileName;
    NSString *_zipFilePath;
}

+ (void)initialize;
+ (void)PBArrayAdd_zipFilePath;
+ (void)PBArrayAdd_fileName;
+ (void)PBArrayAdd_familyName;
+ (void)PBArrayAdd_displayName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *zipFilePath; // @synthesize zipFilePath=_zipFilePath;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithFavFontResourceInfo:(id)arg1 andFileName:(id)arg2 andZipFilePath:(id)arg3;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

