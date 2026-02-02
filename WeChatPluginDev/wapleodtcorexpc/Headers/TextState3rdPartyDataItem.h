//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextState3rdPartyDataItem : NSObject
{
    unsigned int _type;
    NSString *_buffer;
    NSString *_keyBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *keyBuffer; // @synthesize keyBuffer=_keyBuffer;
@property(retain, nonatomic) NSString *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (_Bool)isEqualToDataItem:(id)arg1;
- (id)jumpInfo;
- (id)initWithJumpInfo:(id)arg1;

@end

