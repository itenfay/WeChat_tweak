//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, TextState3rdPartyContext;
@protocol TextState3rdPartyHandler;

@interface TextStateJumpElement : NSObject
{
    _Bool _hasParsedHandler;
    unsigned int _type;
    NSString *_key;
    NSMutableArray *_dataItems;
    id <TextState3rdPartyHandler> _handler;
    TextState3rdPartyContext *_context;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasParsedHandler; // @synthesize hasParsedHandler=_hasParsedHandler;
@property(retain, nonatomic) TextState3rdPartyContext *context; // @synthesize context=_context;
@property(retain, nonatomic) id <TextState3rdPartyHandler> handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)jumpElement;
- (id)initWithJumpElement:(id)arg1;

@end

