//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BannerBaseMsg : NSObject
{
    unsigned int _type;
    unsigned int _showType;
    unsigned int _valid;
    NSString *_data;
}

+ (void)initialize;
+ (void)PBArrayAdd_data;
+ (void)PBArrayAdd_valid;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_type;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) unsigned int valid; // @synthesize valid=_valid;
@property(nonatomic) unsigned int showType; // @synthesize showType=_showType;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void)decodeMsgXml:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

