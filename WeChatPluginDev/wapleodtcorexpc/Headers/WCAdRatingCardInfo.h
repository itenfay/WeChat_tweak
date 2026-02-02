//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdRatingCardInfo : NSObject
{
    NSString *_headTitle;
    NSString *_headUrl;
    NSArray *_tagList;
    NSArray *_tagWithIconList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *tagWithIconList; // @synthesize tagWithIconList=_tagWithIconList;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *headTitle; // @synthesize headTitle=_headTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

