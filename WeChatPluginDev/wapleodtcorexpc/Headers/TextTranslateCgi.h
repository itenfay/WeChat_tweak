//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextTranslateCgi : NSObject
{
    int _scene;
    unsigned int _requestID;
    NSString *_originText;
    CDUnknownBlockType _completeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) unsigned int requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) NSString *originText; // @synthesize originText=_originText;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startTranslate:(CDUnknownBlockType)arg1;
- (id)initWithText:(id)arg1;

@end

