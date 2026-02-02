//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface StatusDeleteDataItem : NSObject
{
    unsigned int _sequence;
    NSString *_username;
    NSString *_textStateId;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (_Bool)isValid;
- (id)description;

@end

