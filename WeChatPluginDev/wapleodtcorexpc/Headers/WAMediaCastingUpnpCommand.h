//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAMediaCastingUpnpCommand : NSObject
{
    unsigned long long _commandType;
    NSString *_commandName;
    NSString *_commandServiceType;
    NSString *_XMLCommandName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *XMLCommandName; // @synthesize XMLCommandName=_XMLCommandName;
@property(copy, nonatomic) NSString *commandServiceType; // @synthesize commandServiceType=_commandServiceType;
@property(copy, nonatomic) NSString *commandName; // @synthesize commandName=_commandName;
@property(nonatomic) unsigned long long commandType; // @synthesize commandType=_commandType;
- (id)commandXMLBodyString;
- (id)commandXMLString;
- (id)initWithCommandType:(unsigned long long)arg1;

@end

