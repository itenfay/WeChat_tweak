//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TextState3rdPartyH5Handler : NSObject
{
    _Bool _confidence;
    NSString *_URLString;
}

@property(nonatomic) _Bool confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (_Bool)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (unsigned int)type;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (_Bool)supportCustomMedia;

@end

