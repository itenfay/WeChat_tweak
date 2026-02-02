//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmojiInfoObj, NSString;

@interface SnsEmojiInfoObj : NSObject
{
    unsigned int _width;
    unsigned int _height;
    unsigned int _size;
    NSString *_md5;
    EmojiInfoObj *_emojiInfoObj;
}

+ (void)initialize;
+ (void)PBArrayAdd_size;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_emojiInfoObj;
+ (void)PBArrayAdd_md5;
- (void).cxx_destruct;
@property(nonatomic) unsigned int size; // @synthesize size=_size;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj=_emojiInfoObj;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
- (void)downloadEmojiIfNotExist;
- (id)getEmojiDesc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSnsEmojiInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

