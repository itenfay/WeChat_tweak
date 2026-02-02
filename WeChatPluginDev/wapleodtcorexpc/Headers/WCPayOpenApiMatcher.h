//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCPayOpenApiMatcher : NSObject
{
    NSMutableArray *_m_matchArray;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_matchArray; // @synthesize m_matchArray=_m_matchArray;
- (_Bool)matchApi:(id)arg1;
- (id)init;

@end

