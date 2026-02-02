//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonFinderDesignerContentLogic;

@interface WCFinderProfileStickerData : NSObject
{
    unsigned int _designerUin;
    EmoticonFinderDesignerContentLogic *_contentLogic;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin=_designerUin;
@property(retain, nonatomic) EmoticonFinderDesignerContentLogic *contentLogic; // @synthesize contentLogic=_contentLogic;

@end

