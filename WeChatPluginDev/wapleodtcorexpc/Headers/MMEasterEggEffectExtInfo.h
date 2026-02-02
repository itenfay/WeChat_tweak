//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMEasterEggEffectExtInfo : NSObject
{
    _Bool _resume;
    unsigned int _messageLocalId;
    NSString *_keyword;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool resume; // @synthesize resume=_resume;
@property(nonatomic) unsigned int messageLocalId; // @synthesize messageLocalId=_messageLocalId;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (id)jsonString;

@end

