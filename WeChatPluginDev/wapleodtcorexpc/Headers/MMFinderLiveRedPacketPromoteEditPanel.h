//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveRedPacketPromoteEditPanel
{
    CDUnknownBlockType _completion;
    NSString *_finderUserName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)fetchRedPacketInfoForLink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onLinkConfirmed:(id)arg1;
- (id)validUriPrefixes;
- (id)titleText;
- (void)leftButtonAction;
- (id)getCurrentLeftButton;
- (void)setupPageSheetConfig;

@end

