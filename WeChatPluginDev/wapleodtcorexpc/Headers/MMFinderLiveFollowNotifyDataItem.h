//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveFollowNotifyMsgInfo, NSString;

@interface MMFinderLiveFollowNotifyDataItem
{
    MMFinderLiveFollowNotifyMsgInfo *_followNotifyMsgInfo;
    NSString *_suffixContent;
    NSString *_prefixContent;
}

- (void).cxx_destruct;
@property(copy) NSString *prefixContent; // @synthesize prefixContent=_prefixContent;
@property(copy) NSString *suffixContent; // @synthesize suffixContent=_suffixContent;
@property(retain, nonatomic) MMFinderLiveFollowNotifyMsgInfo *followNotifyMsgInfo; // @synthesize followNotifyMsgInfo=_followNotifyMsgInfo;
- (id)createSuffixContent;
- (id)createPrefixContent;
- (void)updateData;
- (id)getDisplayContentWithPrefix:(id)arg1;
- (unsigned long long)getHeadUrlCount;
- (void)updateFollowNotifyMsgInfo:(id)arg1;
- (id)initWithFollowNotifyMsgInfo:(id)arg1;

@end

