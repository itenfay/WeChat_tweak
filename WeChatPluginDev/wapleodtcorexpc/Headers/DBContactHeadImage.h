//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactHeadImage : NSObject
{
    unsigned int _imgHDStatus;
    NSString *_headImgUrl;
    NSString *_headHDImgUrl;
    NSString *_headHDMd5;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_headHDMd5;
+ (void)PBArrayAdd_headHDImgUrl;
+ (void)PBArrayAdd_headImgUrl;
+ (void)PBArrayAdd_imgHDStatus;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *headHDMd5; // @synthesize headHDMd5=_headHDMd5;
@property(retain, nonatomic) NSString *headHDImgUrl; // @synthesize headHDImgUrl=_headHDImgUrl;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(nonatomic) unsigned int imgHDStatus; // @synthesize imgHDStatus=_imgHDStatus;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

