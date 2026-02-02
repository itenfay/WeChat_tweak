//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveInfoItem, NSString;

@interface MMLiveMsgTipsExpandViewModel : NSObject
{
    MMLiveInfoItem *_liveInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveInfoItem *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(readonly, nonatomic) NSString *roomId;
@property(readonly, nonatomic) unsigned long long liveId;
@property(readonly, nonatomic) NSString *anchorHeadImgUrl;
@property(readonly, nonatomic) NSString *anchorDisplayName;
@property(readonly, nonatomic) NSString *anchor;
- (id)initWithLiveInfo:(id)arg1;

@end

