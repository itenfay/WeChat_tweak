//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MpLinkPrefix : NSObject
{
    NSString *_urlPrefix;
    NSArray *_showTypeList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *showTypeList; // @synthesize showTypeList=_showTypeList;
@property(retain, nonatomic) NSString *urlPrefix; // @synthesize urlPrefix=_urlPrefix;
- (id)initWithUrlPrefix:(id)arg1 showTypeList:(id)arg2;
- (id)init;

@end

