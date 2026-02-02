//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface MMFinderLiveArticlePromoteEditPanel
{
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)fetchArticleExtInfoForLink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onLinkConfirmed:(id)arg1;
- (id)validUriPrefixes;
- (id)titleText;

@end
