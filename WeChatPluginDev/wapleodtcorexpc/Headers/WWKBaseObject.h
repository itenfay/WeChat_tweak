//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface WWKBaseObject : NSObject
{
    NSString *_bundleID;
    NSString *_bundleName;
    unsigned long long _sequence;
}

+ (id)deserializeWithData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (_Bool)deserializeWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *serializedDict;
@property(readonly, nonatomic) NSData *serializedData;
- (id)init;

@end

