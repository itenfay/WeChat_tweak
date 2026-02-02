//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, ReaderMessageFolder, TemplateReaderMessageFolder;

@interface ChatTimeNodeRightButtonInfo : NSObject
{
    _Bool _hasRightButton;
    NSString *_rightButtonStr;
    ReaderMessageFolder *_messageFolder;
    TemplateReaderMessageFolder *_templateMessageFolder;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TemplateReaderMessageFolder *templateMessageFolder; // @synthesize templateMessageFolder=_templateMessageFolder;
@property(nonatomic) __weak ReaderMessageFolder *messageFolder; // @synthesize messageFolder=_messageFolder;
@property(retain, nonatomic) NSString *rightButtonStr; // @synthesize rightButtonStr=_rightButtonStr;
@property(nonatomic) _Bool hasRightButton; // @synthesize hasRightButton=_hasRightButton;

@end

