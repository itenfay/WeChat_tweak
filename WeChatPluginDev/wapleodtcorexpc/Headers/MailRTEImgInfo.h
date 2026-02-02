//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MailRTEAttachment;

@interface MailRTEImgInfo
{
    MailRTEAttachment *_attachment;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MailRTEAttachment *attachment; // @synthesize attachment=_attachment;
- (id)getImgPath;
- (_Bool)isGifMsg;
- (_Bool)isImgMsg;

@end

