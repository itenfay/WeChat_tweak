//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TextStateIcon;

@interface TextStatePublishOfficialIconItem : NSObject
{
    TextStateIcon *_icon;
    unsigned long long _descriptionLineNumber;
    double _itemHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) unsigned long long descriptionLineNumber; // @synthesize descriptionLineNumber=_descriptionLineNumber;
@property(retain, nonatomic) TextStateIcon *icon; // @synthesize icon=_icon;
- (void)updateItemHeight;
- (id)initWithIcon:(id)arg1;

@end

