//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QBWupTokenInfo : NSObject
{
    NSString *_token;
    NSString *_aesKey;
    long long _maxage;
    double _saveTime;
}

@property(nonatomic) double saveTime; // @synthesize saveTime=_saveTime;
@property(nonatomic) long long maxage; // @synthesize maxage=_maxage;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

