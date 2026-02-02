//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface StreamInputDisplayData : NSObject
{
    _Bool _isEnd;
    unsigned long long _inputId;
    NSString *_resultText;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(retain, nonatomic) NSString *resultText; // @synthesize resultText=_resultText;
@property(nonatomic) unsigned long long inputId; // @synthesize inputId=_inputId;
- (id)init;

@end

