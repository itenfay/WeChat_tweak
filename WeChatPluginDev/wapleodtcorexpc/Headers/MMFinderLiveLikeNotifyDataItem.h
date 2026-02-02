//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveLikeMsgInfo, NSString;

@interface MMFinderLiveLikeNotifyDataItem
{
    MMFinderLiveLikeMsgInfo *_likeMsgInfo;
    NSString *_suffixContent;
    NSString *_prefixContent;
}

- (void).cxx_destruct;
@property(copy) NSString *prefixContent; // @synthesize prefixContent=_prefixContent;
@property(copy) NSString *suffixContent; // @synthesize suffixContent=_suffixContent;
@property(retain, nonatomic) MMFinderLiveLikeMsgInfo *likeMsgInfo; // @synthesize likeMsgInfo=_likeMsgInfo;
- (id)createSuffixContent;
- (id)createPrefixContent;
- (void)updateData;
- (id)getDisplayContentWithPrefix:(id)arg1;
- (unsigned long long)getHeadUrlCount;
- (void)updateLikeMsgInfo:(id)arg1;
- (id)initWithLikeMsgInfo:(id)arg1;

@end

