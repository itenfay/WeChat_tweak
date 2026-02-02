//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TPUrlDataSource : NSObject
{
    int _playId;
    NSString *_originUrl;
    NSString *_thumbPlayerUrl;
    NSString *_systemPlayerUrl;
    NSDictionary *_httpHeader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *httpHeader; // @synthesize httpHeader=_httpHeader;
@property(retain, nonatomic) NSString *systemPlayerUrl; // @synthesize systemPlayerUrl=_systemPlayerUrl;
@property(retain, nonatomic) NSString *thumbPlayerUrl; // @synthesize thumbPlayerUrl=_thumbPlayerUrl;
@property(retain, nonatomic) NSString *originUrl; // @synthesize originUrl=_originUrl;
@property(nonatomic) int playId; // @synthesize playId=_playId;
- (_Bool)isValid;
- (id)initWithOriginUrl:(id)arg1 thumbPlayerUrl:(id)arg2 systemPlayerUrl:(id)arg3 httpHeader:(id)arg4;

@end

