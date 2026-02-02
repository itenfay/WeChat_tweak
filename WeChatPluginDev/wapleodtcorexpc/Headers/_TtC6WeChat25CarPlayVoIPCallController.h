//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;
@protocol _TtP6WeChat23CarPlayVoIPCallDelegate_;

@interface _TtC6WeChat25CarPlayVoIPCallController
{
    MISSING_TYPE *delegate;
}

- (void).cxx_destruct;
- (id)initWithContact:(id)arg1 toast:(id)arg2;
- (void)setRoomInfoWithRoomID:(long long)arg1 roomKey:(long long)arg2;
- (void)updateButtonsWithIsMuted:(_Bool)arg1;
- (id)initWithContact:(id)arg1 toast:(id)arg2 isMuted:(_Bool)arg3 isVideo:(_Bool)arg4;
@property(nonatomic) __weak id <_TtP6WeChat23CarPlayVoIPCallDelegate_> delegate; // @synthesize delegate;

@end

