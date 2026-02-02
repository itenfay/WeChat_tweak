//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BusinessActionInfo, BusinessDetailInfo, BusinessExtendInfo, NSString;

@interface BSBusinessCommonItem : NSObject
{
    NSString *_title;
    NSString *_desc;
    NSString *_thumbUrl;
    BusinessDetailInfo *_detailInfo;
    BusinessExtendInfo *_extendInfo;
    BusinessActionInfo *_actionInfo;
}

+ (id)fromServerObj:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BusinessActionInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(retain, nonatomic) BusinessExtendInfo *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(retain, nonatomic) BusinessDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

