//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/NSTextAttachment.h>

@class RTEAttributeNode;

@interface RTETextAttachment : NSTextAttachment
{
    RTEAttributeNode *_attribute;
    struct CGSize _attachmentSize;
    struct CGRect _attachmentFrame;
}

+ (id)emptyImage;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect attachmentFrame; // @synthesize attachmentFrame=_attachmentFrame;
@property(nonatomic) struct CGSize attachmentSize; // @synthesize attachmentSize=_attachmentSize;
@property(retain, nonatomic) RTEAttributeNode *attribute; // @synthesize attribute=_attribute;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (void)configFrameWithWidth:(double)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned int type;
- (id)initWithAttachmentNode:(id)arg1;

@end

