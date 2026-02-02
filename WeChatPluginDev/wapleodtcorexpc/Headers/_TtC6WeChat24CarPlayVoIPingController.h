//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, NSString;

@interface _TtC6WeChat24CarPlayVoIPingController
{
    MISSING_TYPE *contactTemplate;
    MISSING_TYPE *roomID;
    MISSING_TYPE *roomKey;
    MISSING_TYPE *callRole;
    MISSING_TYPE *contact;
    MISSING_TYPE *type;
    MISSING_TYPE *startTalkTime;
    MISSING_TYPE *toast;
}

- (void).cxx_destruct;
- (_Bool)isSameCallWithRoomID:(long long)arg1 roomKey:(long long)arg2;
- (void)setRoomInfoWithRoomID:(long long)arg1 roomKey:(long long)arg2;
- (id)initWithContact:(id)arg1 toast:(id)arg2;
@property(nonatomic, copy) NSString *toast;
@property(nonatomic) long long startTalkTime; // @synthesize startTalkTime;

@end

