/*
 * Copyright 2013  Rinat Ibragimov
 *
 * This file is part of libvdpau-va-gl
 *
 * libvdpau-va-gl is distributed under the terms of the LGPLv3. See COPYING for details.
 */

#ifndef VA_GL_SRC_CTX_STACK_H
#define VA_GL_SRC_CTX_STACK_H

#include "api.h"

void glx_context_push_global(Display *dpy, Drawable wnd, GLXContext glc);
void glx_context_push_thread_local(VdpDeviceData *deviceData);
void glx_context_pop(void);
void glx_context_ref_glc_hash_table(Display *dpy, int screen);
void glx_context_unref_glc_hash_table(Display *dpy);
GLXContext  glx_context_get_root_context(void);

void glx_context_lock(void);
void glx_context_unlock(void);

void x11_push_eh(void);
int  x11_pop_eh(void);

#endif /* VA_GL_SRC_CTX_STACK_H */
