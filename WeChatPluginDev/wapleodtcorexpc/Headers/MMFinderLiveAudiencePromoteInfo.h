//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, FinderLiveShopWindowAdItem, NSData;

@interface MMFinderLiveAudiencePromoteInfo : NSObject
{
    unsigned int _type;
    unsigned long long _promoteId;
    NSData *_reportExtBuffer;
    FinderLiveShopWindowAdItem *_adItem;
    FinderJumpInfo *_jumpInfo;
}

+ (id)createLiveAudiencePromoteInfoFrom:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) FinderLiveShopWindowAdItem *adItem; // @synthesize adItem=_adItem;
@property(retain, nonatomic) NSData *reportExtBuffer; // @synthesize reportExtBuffer=_reportExtBuffer;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned long long promoteId; // @synthesize promoteId=_promoteId;

@end

