//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, NSString;
@protocol _TtP6WeChat23CarPlayVoIPTalkDelegate_;

@interface _TtC6WeChat25CarPlayVoIPTalkController
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *durationLabel;
}

- (void).cxx_destruct;
- (id)initWithContact:(id)arg1 toast:(id)arg2;
- (void)safeSetDelegateWithDelegate:(id)arg1;
- (void)updateButtonsWithIsMuted:(_Bool)arg1;
- (id)initWithContact:(id)arg1 toast:(id)arg2 isMuted:(_Bool)arg3 isVideo:(_Bool)arg4 isCaller:(_Bool)arg5;
@property(nonatomic, copy) NSString *durationLabel;
@property(nonatomic) __weak id <_TtP6WeChat23CarPlayVoIPTalkDelegate_> delegate; // @synthesize delegate;

@end

