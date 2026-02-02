//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderAudienceReserveLiveClientInfo : NSObject
{
    unsigned int _sourceType;
    NSString *_commentscene;
    NSString *_refPageType;
    NSString *_actionResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *actionResult; // @synthesize actionResult=_actionResult;
@property(retain, nonatomic) NSString *refPageType; // @synthesize refPageType=_refPageType;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *commentscene; // @synthesize commentscene=_commentscene;

@end

