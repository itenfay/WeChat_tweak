//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveErrorPage, NSString;

@interface WCFinderRealNameVerifyFailModel : NSObject
{
    int _ret;
    NSString *_msg;
    FinderLiveErrorPage *_errorPage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveErrorPage *errorPage; // @synthesize errorPage=_errorPage;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) int ret; // @synthesize ret=_ret;

@end

