//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMessageVerifyItem : NSObject
{
    NSString *_title;
    NSString *_desc;
    NSString *_relativePath;
    NSString *_sceneNote;
    NSString *_scene;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(copy, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)getTextFrom:(struct XmlReaderNode_t *)arg1 atNodeName:(id)arg2;
- (id)toXML;
- (void)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

