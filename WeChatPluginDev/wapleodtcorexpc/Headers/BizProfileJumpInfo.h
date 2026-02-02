//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface BizProfileJumpInfo : NSObject
{
    NSString *_userName;
    NSNumber *_addContactScene;
    NSNumber *_openArticleFromScene;
    NSNumber *_enterTarget;
    NSString *_bizFinderExtraData;
    NSString *_articleUrl;
    NSNumber *_bizFromScene;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUserName:(id)arg1 addContactScene:(id)arg2 openArticleFromScene:(id)arg3 enterTarget:(id)arg4 bizFinderExtraData:(id)arg5 articleUrl:(id)arg6 bizFromScene:(id)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *bizFromScene; // @synthesize bizFromScene=_bizFromScene;
@property(copy, nonatomic) NSString *articleUrl; // @synthesize articleUrl=_articleUrl;
@property(copy, nonatomic) NSString *bizFinderExtraData; // @synthesize bizFinderExtraData=_bizFinderExtraData;
@property(retain, nonatomic) NSNumber *enterTarget; // @synthesize enterTarget=_enterTarget;
@property(retain, nonatomic) NSNumber *openArticleFromScene; // @synthesize openArticleFromScene=_openArticleFromScene;
@property(retain, nonatomic) NSNumber *addContactScene; // @synthesize addContactScene=_addContactScene;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)toList;

@end

