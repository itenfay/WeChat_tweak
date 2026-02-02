//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, MMUIViewController, NSString;

@interface EmoticonCameraTakeModel : NSObject
{
    _Bool _needCheck;
    _Bool _needAsyncCamerFollowCheck;
    _Bool _needAsyncUpload;
    unsigned long long _scene;
    CMessageWrap *_msgWrap;
    NSString *_lensId;
    NSString *_username;
    MMUIViewController *_viewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) _Bool needAsyncUpload; // @synthesize needAsyncUpload=_needAsyncUpload;
@property(nonatomic) _Bool needAsyncCamerFollowCheck; // @synthesize needAsyncCamerFollowCheck=_needAsyncCamerFollowCheck;
@property(nonatomic) _Bool needCheck; // @synthesize needCheck=_needCheck;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (id)init;

@end

