//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EditImageEmotionWidgetState
{
    _Bool _isEmotionAnimated;
    NSString *_emotionMd5;
    NSString *_emotionSearchKey;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEmotionAnimated; // @synthesize isEmotionAnimated=_isEmotionAnimated;
@property(retain, nonatomic) NSString *emotionSearchKey; // @synthesize emotionSearchKey=_emotionSearchKey;
@property(retain, nonatomic) NSString *emotionMd5; // @synthesize emotionMd5=_emotionMd5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

