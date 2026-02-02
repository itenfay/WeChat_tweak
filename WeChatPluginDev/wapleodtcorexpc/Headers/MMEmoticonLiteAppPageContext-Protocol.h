//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMEmoticonLiteAppCreator;

@protocol MMEmoticonLiteAppPageContext <NSObject>
@property(copy, nonatomic) CDUnknownBlockType openFailCallback;
@property(nonatomic) unsigned long long enterTimeInMs;
@property(nonatomic) _Bool isPresentModal;
@property(nonatomic) long long emotionScene;
- (id <MMEmoticonLiteAppCreator>)pageCreator;
- (_Bool)isValid;
- (_Bool)allowsInEmoticonLimited;
@end

