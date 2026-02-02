//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FinderAdReportInfo : NSObject
{
    NSString *_uxinfo;
    NSString *_snsid;
    long long _scene;
}

- (void).cxx_destruct;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *snsid; // @synthesize snsid=_snsid;
@property(retain, nonatomic) NSString *uxinfo; // @synthesize uxinfo=_uxinfo;

@end

