//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIResponder;

@interface MMMenuVisionData : NSObject
{
    NSArray *_items;
    NSString *_sceneId;
    UIResponder *_responder;
    struct CGRect _showFromRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIResponder *responder; // @synthesize responder=_responder;
@property(retain, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
@property(nonatomic) struct CGRect showFromRect; // @synthesize showFromRect=_showFromRect;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;

@end

