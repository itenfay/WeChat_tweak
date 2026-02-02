//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TSPacketResponse : NSObject
{
    int _errorCode;
    NSMutableDictionary *_externals;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *externals; // @synthesize externals=_externals;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
- (id)init;

@end

