//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, NSString;

@interface _TtC6WeChat17MagicFireworkInfo
{
    MISSING_TYPE *fireworkType;
    MISSING_TYPE *fireworkText;
    MISSING_TYPE *fireworkEmojiKey;
    MISSING_TYPE *hasFireworkTrail;
    MISSING_TYPE *randomSeed;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (id)toDictionary;
- (id)initWithId:(id)arg1 timestamp:(unsigned long long)arg2 fireworkType:(long long)arg3 fireworkText:(id)arg4 fireworkEmojiKey:(id)arg5 hasFireworkTrail:(_Bool)arg6 randomSeed:(unsigned int)arg7 frame:(struct CGRect)arg8;
@property(nonatomic) unsigned int randomSeed; // @synthesize randomSeed;
@property(nonatomic) _Bool hasFireworkTrail; // @synthesize hasFireworkTrail;
@property(nonatomic, copy) NSString *fireworkEmojiKey;
@property(nonatomic, copy) NSString *fireworkText;
@property(nonatomic) long long fireworkType; // @synthesize fireworkType;

@end

