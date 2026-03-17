//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;
@protocol _TtP6WeChat26CarPlayVoIPReceiveDelegate_;

@interface _TtC6WeChat28CarPlayVoIPReceiveController : NSObject
{
    MISSING_TYPE *delegate;
}

- (id)initWithContact:(id)arg1 toast:(id)arg2;
- (void)safeSetDelegateWithDelegate:(id)arg1;
- (void)setRoomInfoWithRoomID:(long long)arg1 roomKey:(long long)arg2;
- (id)initWithContact:(id)arg1 toast:(id)arg2 isVideo:(_Bool)arg3;
@property(nonatomic) __weak id <_TtP6WeChat26CarPlayVoIPReceiveDelegate_> delegate; // @synthesize delegate;

@end

